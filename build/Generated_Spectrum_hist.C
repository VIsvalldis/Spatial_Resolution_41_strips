void Generated_Spectrum_hist()
{
	TH1F *hist = new TH1F("hist", "Generated spectrum", 200, 0, 200000);
	
	//Заполняем
	
	std::ifstream file("use_spec.txt");
    	double x_val;
    	
    	while (file >> x_val) {
        	hist->Fill(x_val);	
    	}
    	file.close();
	
	TCanvas *c1 = new TCanvas();	
	c1->SetGridx();						//Отрисовываем сетку
	c1->SetGridy();	
	//c1->SetLogy();

	
	hist->GetXaxis()->SetTitle("Energy");			//подписываем оси
	hist->GetYaxis()->SetTitle("Entries");
	
	hist->Draw();
}
