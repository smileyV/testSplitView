//
//  DetailViewController.h
//  testSplitView
//
//  Created by Smiley.V on 15/9/18.
//  Copyright © 2015年 2crazyones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

