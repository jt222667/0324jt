function MEX_generate(num_modules,RP_data)

module_mex = ones(1,(3+num_modules));
install_mex = ones(1,(3+num_modules));
align_mex = zeros(1,(3+num_modules));
sequence_mex = [0, 1, 2, 0, 4:(num_modules+2)]; 

LP = LP_generate(module_mex,install_mex,align_mex,sequence_mex,RP_data);
SV = SV_generate(LP);
SV = calc_aa_0318( LP, SV );
SV = calc_pos_0318( LP, SV );
q0 = zeros(1,LP.num_joint);
SV =Trans_aa_pos_init(LP,SV,q0);
codegen -report calc_aa_0318.m -args {LP,SV} 
codegen -report calc_pos_0318.m -args {LP,SV} 

end