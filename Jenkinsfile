pipeline {
	agent any
	
	stages {
		stage('Build') {
			steps {
				echo 'Building..'
				sh 'build.bat'
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
