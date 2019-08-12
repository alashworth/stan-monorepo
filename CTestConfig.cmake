set(CTEST_PROJECT_NAME "stan_monorepo")
set(CTEST_NIGHTLY_START_TIME "01:00:00 UTC")

set(CTEST_DROP_METHOD "http")
set(CTEST_DROP_SITE "my.cdash.org")
set(CTEST_DROP_LOCATION "/submit.php?project=stan_monorepo")
set(CTEST_DROP_SITE_CDASH TRUE)

# Could get checkmarks on pull requests too...
# https://blog.kitware.com/github-checks-and-statuses-from-cdash/