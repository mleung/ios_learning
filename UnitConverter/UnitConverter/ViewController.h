//
//  ViewController.h
//  UnitConverter
//
//  Created by Michael Leung on 11/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    UITextField *tempText;
    UILabel *resultLabel;
}

@property (strong, nonatomic) IBOutlet UILabel *resultLabel;
@property (strong, nonatomic) IBOutlet UITextField * tempText;

-(IBAction)convertTemp:(id)sender;

@end
