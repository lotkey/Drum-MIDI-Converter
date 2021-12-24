library(shiny)
library(shinythemes)

ui <- shinyUI({
  fluidPage(theme = shinytheme("cyborg"),
    fileInput("file_input", "Choose MIDI file",
      accept = c(
        ".mid",
        ".midi"
      )          
    )          
  )
})