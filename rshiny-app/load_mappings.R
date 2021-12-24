library(hash)

load_mappings <- function() {
  # path <- utils::getSrcDirectory()[1] + "conversions/"
  path <- paste(dirname(rstudioapi::getActiveDocumentContext()$path), "/conversions/", sep="")
  dirs <- list.dirs(path=path, full.name=TRUE, recursive=FALSE)  
  return(dirs)
}

print(load_mappings())
