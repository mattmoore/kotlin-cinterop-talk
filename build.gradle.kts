plugins {
  kotlin("multiplatform") version "1.4.20"
}

repositories {
  jcenter()
  mavenCentral()
}

dependencies {
  project(":greeter-klib")
  commonMainImplementation(kotlin("stdlib-jdk8"))
}

kotlin {
  jvm()
}

tasks.withType<Wrapper> {
  gradleVersion = "6.7.1"
  distributionType = Wrapper.DistributionType.ALL
}
