from wtforms import Form, BooleanField, TextField, PasswordField, validators

class RegistrationForm(Form):
    name = TextField('Username', [validators.Length(min=4, max=25)])	
    dept = TextField('Dept', [validators.Length(min=4, max=6)])
    '''g_year = TextField('G_year', [validators.Length(min=4, max=4)])
	c_org = TextField('C_org', [validators.Length(min=4, max=40)])
	hot_line = TextField('hot_line', [validators.Length(min=11, max=40)])'''
    
