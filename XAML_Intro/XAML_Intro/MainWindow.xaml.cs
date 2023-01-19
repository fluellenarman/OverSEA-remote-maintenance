using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace XAML_Intro
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

        }

        private void Login_Button_Click(object sender, RoutedEventArgs e)
        {

            // make sure that both user and pswd input are not empty
            if (user_input.Text != "" && pswd_input.Text != "")
            {
                login_error_msg.Visibility = Visibility.Hidden;
                login_success_msg.Visibility = Visibility.Visible;

            }
            else
            {
                login_error_msg.Visibility = Visibility.Visible;
                login_success_msg.Visibility = Visibility.Hidden;
            }
        }
    }
}
