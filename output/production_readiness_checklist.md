


<a id="org0006492"></a>

# Production Readiness Review (PRR)


## Architecture

-   [ ] Is there a high-level summary of the product feature documented
    along with usecases?
-   [ ] Is there a detailed documentation of the product with setup, development,
    deployement and contribution explained in detail?
-   [ ] Are there any architecture diagrams which show the feature and
    how it interacts with other services / features?
    Please add the following: dependencies (internal / external),
    ports, encryption, protocols, ACLs, security policies, etc.


<a id="orgb19ec07"></a>

## Security


<a id="org5e7c747"></a>

### Design

-   [ ] Does the service follow company infosec guidelines?
-   [ ] Is the service using HTTPS for communication?
-   [ ] How are certificates managed? Are certificates renewed automatically?


<a id="org3d03c84"></a>

### Infrastructure

-   [ ] Are any new resources added that this service uses?
-   [ ] Is Infrastructure as Code (IaC) (e.g., Terraform) used to create infrastructure required for this service?
    -   [ ] If yes, is IaC code checked using secure code analysis tools?
    -   [ ] Where is the state file stored, and who has access to it?
    -   [ ] Is the state file backed up from remote storage?
    -   [ ] Is the state file version controlled?
    -   [ ] Are there any secrets in the state file?
-   [ ] Are we using a configuration management tool (e.g., Ansible)?
    -   [ ] How are variables and secrets passed?
-   [ ] Are network security policies applied?
    -   [ ] Does the firewall follow the principle of least privilege?
    -   [ ] Can the service handle and mitigate DDoS attacks?
    -   [ ] Is the service behind an Intrusion Detection System (IDS) / Intrusion Prevention System (IPS)?
    -   [ ] Is the service behind a Web Application Firewall (WAF)?


<a id="org00ca712"></a>

### Development and Operations

-   [ ] Are there any traffic that communicates via HTTP?
-   [ ] What version of TLS is used? Is TLS 1.2 or higher enforced?
-   [ ] Is security scanning done as part of the pipeline?
    -   [ ] Are vulnerability scans integrated into the CI/CD pipeline (e.g., SAST, DAST)?
    -   [ ] Are dependency scans performed regularly?
-   [ ] Are all secrets encrypted at rest and in transit?
-   [ ] Is this service adding any form of authentication and authorization?
    -   [ ] Is OAuth 2.0 and OpenID Connect implemented for third-party access?
    -   [ ] Is Multi-Factor Authentication (MFA) enforced on sensitive systems?
-   [ ] Does the service follow the principle of least privilege?
-   [ ] Are there audit logs for data access?
    -   [ ] Are logs sanitized to hide sensitive customer information?
-   [ ] Is the service containerized?
    -   [ ] Are we scanning containers for security (e.g., Hadolint, KICS, Checkov)?


<a id="org5e17b09"></a>

### Logs

-   [ ] Do logs contain any sensitive data?
-   [ ] Are logs sanitized to hide sensitive customer information?


<a id="org1d0de20"></a>

### Additional Security Practices


<a id="orgcee8127"></a>

### Authentication/Authorization

-   [ ] Are secure session management practices implemented (e.g., HttpOnly cookies, session expiration)?
-   [ ] Is Single Sign-On (SSO) used for centralized identity management?
-   [ ] Are APIs secured with token-based authentication (e.g., JWT)?
-   [ ] Are failed login attempts limited and monitored for potential brute-force attacks?
-   [ ] Are secure password reset options provided (e.g., OTPs, single-use links)?


<a id="org633481a"></a>

### Vulnerability Scanning

-   [ ] Are penetration tests conducted regularly, ideally with third-party testers?
-   [ ] Is there a process for reporting vulnerability findings and prioritizing remediation?


<a id="org4ea1e52"></a>

### Encryption

-   [ ] Are strong encryption algorithms (e.g., AES-256) used for sensitive data at rest?
-   [ ] Are API keys and secrets managed securely without hardcoding in the codebase?
-   [ ] Are key management practices implemented (e.g., using AWS KMS, Azure Key Vault)?


<a id="org2030f43"></a>

### Threat Modeling

-   [ ] Has a threat model been created to identify potential risks and vulnerabilities?


<a id="org274806e"></a>

### Data Protection

-   [ ] Is sensitive data encrypted both at rest and in transit?
-   [ ] Are there data retention policies in place?


<a id="orgbe2049e"></a>

### User Training and Awareness

-   [ ] Are employees trained on security best practices and awareness?


<a id="org3435ae9"></a>

### Incident Response Plan

-   [ ] Is there an incident response plan in place, and has it been tested?


<a id="org5c5335c"></a>

### Third-Party Risk Management

-   [ ] Are third-party vendors assessed for security compliance?
-   [ ] Are contracts in place that require third parties to adhere to security standards?


<a id="orgf892e81"></a>

### Environment Hardening

-   [ ] Are servers and services hardened against attacks (e.g., unnecessary services disabled)?
-   [ ] Are regular patch management practices implemented?


<a id="org91d69b7"></a>

### Access Controls

-   [ ] Are role-based access controls (RBAC) implemented?
-   [ ] Are user access rights regularly reviewed?


<a id="org51c7128"></a>

### Network Security

-   [ ] Is network segmentation implemented to limit the spread of attacks?
-   [ ] Are VPNs used for remote access?


<a id="orgfc36d6a"></a>

### Application Security

-   [ ] Are secure coding practices followed?
-   [ ] Are regular code reviews conducted for security?


<a id="orgc710a85"></a>

## Operational / Scaling risks

-   [ ] What might be the potential scaling issues?
-   [ ] List all dependencies and mention if the dependency is soft/hard,
    and how service might be impacted by failure of that dependency?
-   [ ] What is the blast radius if this feature fails?
-   [ ] Are there any SPOFs (Single Points of Failure) in this feature design?
    If yes, how are we going to handle them?
-   [ ] How easily can we scale the service?
-   [ ] How are we going to scale the service (horizontal or vertical)?
-   [ ] Is there any loadtesting criteria defined? If yes, then is it explained
    in the documentation?
-   [ ] Is there any monitoring tools to to track performance
    metrics and scaling events?
-   [ ] Is there any metric defined to capture the system performance ?


<a id="org939237f"></a>

## Performance


<a id="org379838b"></a>

### Optimization Strategies

-   [ ] Are there throttling limits on the service (e.g., rate limiting)?
-   [ ] What do customers experience if the limit is reached?
-   [ ] Are there retry and back-off strategies for dependencies?
-   [ ] Can the service run optimally with sudden spikes in traffic?
-   [ ] Has the code been optimized to minimize unnecessary computations?
-   [ ] Are there regular code reviews for identifying and refactoring
    inefficient code?
-   [ ] Are database indexes applied to frequently accessed columns?
-   [ ] Have database queries been optimized and vetted to avoid complex joins
    and reduce latency?
-   [ ] Are caching strategies in place for frequently accessed data?
-   [ ] Are network requests minimized and data payloads optimized for size
    and format?
-   [ ] Are assets (JavaScript, CSS, images) compressed and minified?


<a id="org31ecc6a"></a>

### Latency Checks

-   [ ] Are acceptable latency thresholds defined for various
    components (e.g., <200ms for API responses)?
-   [ ] Is end-to-end latency being monitored across the request path?
-   [ ] Are API calls optimized to limit the number needed per request?
-   [ ] Has a Content Delivery Network (CDN) been implemented for global users?
-   [ ] Are there alerts set up for when latency thresholds are breached?


<a id="orgbcde10a"></a>

### Performance Benchmarks

-   [ ] Are KPIs such as response time, throughput, and error
    rate clearly defined?
-   [ ] Has a performance baseline been set to measure future releases against?
-   [ ] Has benchmark testing been conducted using tools like Apache
    Benchmark, Gatling, or k6?
-   [ ] Are performance benchmarks regularly reviewed and updated based on
    the latest application performance?


<a id="orgd814f9e"></a>

### Monitoring and Alerts

-   [ ] Is real-time monitoring of performance metrics (CPU, memory, disk I/O,
    network latency) set up?
-   [ ] Are alerts configured for metrics that exceed defined thresholds?
-   [ ] Is there ongoing analysis of trends in performance metrics to
    anticipate and prevent issues?
-   [ ] Is a procedure in place for responding to alerts and
    mitigating performance degradation?


<a id="orgd1f2701"></a>

## Compliance


<a id="org965f405"></a>

### General Compliance

-   [ ] Is this service prone to any legal issues?
-   [ ] Are regular security audits scheduled to ensure compliance with
    security policies?
-   [ ] Are data privacy regulations like GDPR, CCPA, or HIPAA clearly
    identified for all regions served?


<a id="org830d687"></a>

### Data Privacy Regulations

-   [ ] Are users able to access, rectify, or delete their personal data as per regulatory requirements?
-   [ ] Is a data retention policy in place to manage data lifecycle based on compliance needs?
-   [ ] Are clear user consent logs maintained to document data processing activities?
-   [ ] Are consent mechanisms implemented for data collection,
    processing, and sharing?
-   [ ] Has a data processing policy been established and communicated
    to all relevant teams?
-   [ ] Is data encryption implemented both at rest (e.g., AES-256) and
    in transit (e.g., TLS)?
-   [ ] Are access controls configured to ensure that only authorized personnel
    can access sensitive data?
-   [ ] Are regular vulnerability assessments performed to check for potential
    security gaps?


<a id="orgf5cb2f6"></a>

### Compliance Audits and Reporting

-   [ ] Are periodic compliance audits scheduled to verify adherence to data
    privacy standards?
-   [ ] Is there a reporting mechanism to communicate compliance status
    with relevant stakeholders?
-   [ ] Are logs maintained for all data access and processing activities to
    support audits and reviews?
-   [ ] Is there a system in place to keep policies updated with the latest
    legal and industry standards?


<a id="orgb25cb9e"></a>

## Reliability


<a id="orgd0e42e9"></a>

### Patching

-   [ ] How often is the service patched?
-   [ ] Is patching fully automated? If not, list automated and non-automated steps.
-   [ ] Is there a runbook for patching the service, infrastructure, and applications used by this feature?
-   [ ] Is there an expected downtime during patching? If yes, how long?


<a id="org0ac8126"></a>

### Backup and Restore

-   [ ] Is this a stateful service? If yes, what is the backend datastore?
-   [ ] Is there a backup process?
-   [ ] What type of backups are done (full, differential, incremental)?
-   [ ] Where are backups stored, and what are their RTO and RPO?
-   [ ] Are backups monitored? If yes, please provide a link to the dashboard.
-   [ ] What is the backup retention period?
-   [ ] Was a restore from backup tested? If so, how frequently is this tested?
-   [ ] How frequently are backups performed (e.g., daily, weekly)?
-   [ ] How much data is lost if the datastore was restored from the last
    backup?
-   [ ] Are backups securely stored in remote, geographically separate locations?
-   [ ] Are regular integrity checks performed on backups to ensure they are
    restorable?
-   [ ] Is there a documented backup strategy that includes schedules for
    daily, weekly, and monthly backups?


<a id="org78e9f0a"></a>

### Disaster Recovery Planning

-   [ ] Has a Disaster Recovery (DR) plan been documented, including roles
    and responsibilities?
-   [ ] Is the DR plan communicated to key team members with clarity on
    individual roles?
-   [ ] Are Recovery Point Objectives (RPO) and Recovery Time Objectives (RTO)
    defined and aligned with business needs?
-   [ ] Are DR drills conducted periodically, covering different scenarios
    (e.g., outages, data corruption)?
-   [ ] Are external dependencies, such as third-party services, documented in
    the DR plan?
-   [ ] Is there a fallback strategy for critical external dependencies?


<a id="org6fb5c2e"></a>

### Uptime Monitoring and Incident Response

-   [ ] Are uptime monitoring tools configured for mission-critical services?
-   [ ] Are alerts set up to notify the team of any downtime events in real-time?
-   [ ] Is historical uptime data tracked and reviewed to identify potential
    reliability risks?
-   [ ] Are incident response procedures documented and readily accessible?
-   [ ] Is the team trained on incident response SOPs, including escalation
    protocols?
-   [ ] Are periodic audits conducted to review and improve reliability
    standards?
-   [ ] Is there an annual review of recovery and uptime policies to ensure
    alignment with industry standards and objectives?


<a id="org695bc50"></a>

## Deployments


<a id="org704e9dc"></a>

### General

-   [ ] Are build artifacts produced?
-   [ ] Are build artifacts version controlled?
-   [ ] Are build artifacts promoted for each environment (dev/stage/prod)?
-   [ ] Where are build artifacts stored, and how long are they retained?
-   [ ] Do we have a CI/CD process?
-   [ ] Does the CI process consist of the following:
    -   [ ] Linting
    -   [ ] Unit testing
    -   [ ] Integration testing
    -   [ ] Security testing
    -   [ ] Code scanning (e.g., SonarQube)
-   [ ] How are build artifacts labeled? How many copies of each artifact do we store (\`:latest\`, \`:semVer\`)?
-   [ ] How often do we intend to release?
-   [ ] Is the release process fully automated? If not, list the automated and non-automated steps.
-   [ ] Is there any downtime involved in the release? If yes, what is the expected downtime?
-   [ ] How long does the rollback process take?
-   [ ] What deployment strategy are we using (e.g., blue-green, canary, A/B, recreated, shadow)?


<a id="org68e2d6a"></a>

### Deployment Strategies

-   [ ] Have we defined and tested our primary deployment strategy?
    -   [ ] Blue-green deployment
    -   [ ] Canary deployment
    -   [ ] A/B testing
    -   [ ] Rolling updates
    -   [ ] Shadow deployments
-   [ ] Have we documented all steps involved in our deployment strategy?
-   [ ] Is there a contingency plan in place for each strategy?


<a id="orgf5d03dd"></a>

### Security and Compliance

-   [ ] Are security tests integrated into the CI/CD pipeline?
-   [ ] Are build artifacts scanned for vulnerabilities before deployment?
-   [ ] Is sensitive information (e.g., credentials, API keys) managed securely?
-   [ ] Have compliance checks been performed for data protection and privacy?


<a id="orgb03eaed"></a>

### Documentation and Communication

-   [ ] Is there documentation for each deployment step?
-   [ ] Have deployment procedures been communicated to all relevant team members?
-   [ ] Is there a communication plan for notifying stakeholders about releases and any issues?
-   [ ] Are post-release issues documented and shared with the team for future reference?


<a id="org98cf651"></a>

## Post-Release Monitoring

-   [ ] Are log aggregation and monitoring systems set up?
    -   [ ] Are logs (application, server, database) aggregated in a centralized location with proper retention policies?
    -   [ ] Are logs categorized for filtering (e.g., error, warning, info)?
-   [ ] Are alerting systems configured to notify on critical issues?
    -   [ ] Are thresholds for alerts defined (e.g., error rates, response times)?
    -   [ ] Are alerts configured for key metrics like CPU usage, memory, latency, and error rates?
    -   [ ] Are alert notifications directed to appropriate channels (e.g., Slack, email, pager)?
-   [ ] Are health checks implemented to monitor service availability?
    -   [ ] Are periodic health checks scheduled for critical components (e.g., databases, API endpoints)?
    -   [ ] Is there an automated incident response plan for health check failures?
-   [ ] Is there a post-deployment review process for logs and metrics?
    -   [ ] Are user experience and performance metrics tracked against baseline metrics?
    -   [ ] Are response times, load times, and error rates monitored post-deployment?
-   [ ] Are dashboards available for real-time visualization of key metrics?
    -   [ ] Do dashboards display relevant metrics and are accessible to the team?
-   [ ] Are follow-up reviews conducted on post-release incidents and alerts?
    -   [ ] Are lessons learned documented and shared for continuous improvement?
    -   [ ] Is there a process to update documentation and training based on findings?

