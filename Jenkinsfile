pipeline {
	agent any
	
	stages {
		stage('Build') {
			steps {
				echo 'Building..'
				build.bat
			}
		stage('Test') {
			steps {
				echo 'Testing..'
			}
		stage('Deploy') {
			steps {
				echo 'Deploying..'
			}
		}
	}
}
