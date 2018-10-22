pipeline {
	agent any
	
	triggers {
		pollSCM('H/5 * * * *')
	}
	
	stages {
		stage('Build') {
			steps {
				echo 'Building..'
				bat './build.bat'
			}
		}
		stage('Test') {
			steps {
				echo 'Testing..'
			}
		}
		stage('Deploy') {
			steps {
				echo 'Deploying..'
			}
		}
	}
}
