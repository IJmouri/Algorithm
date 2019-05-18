
for(k=1; k<co; k++)
        {
            for (i=1; i<co; i++)
            {
                for(j=1; j<co; j++)
                {
                    if (ar[i][j] > ar[i][k] + ar[k][j])
                        ar[i][j] = ar[i][k] + ar[k][j];
                }
            }
        }
