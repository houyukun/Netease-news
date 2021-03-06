//
//  HYKNewsTableView.h
//  网易新闻
//
//  Created by 侯玉昆 on 16/2/22.
//  Copyright © 2016年 侯玉昆. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HYKBar.h"
#import "HYKNewsViewController.h"

@protocol clickCellLoadWebDataDelegate<NSObject>

- (void)didSelectCellOpenWeb:(HYKNewsViewController *)vc;

@end

@interface HYKNewsTableView : UITableView

@property(strong,nonatomic) HYKBar *model;

@property(assign,nonatomic) id <clickCellLoadWebDataDelegate>jump;

@end
