{
	f = new TF1("f","[0]*x",0,1);
	f->SetParNames("phi");
	h = new TGraphErrors("Datas/dNsin.txt","%lg%lg%lg");
	h->SetTitle("Observed count for each interval of 20 degrees;sin(theta/2);dN");
	h->Fit("f");
	h->Draw();
}
