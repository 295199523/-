//
//  F_CoustomTableViewCell.h
//  冒泡新闻
//
//  Created by JOE on 16/3/5.
//  Copyright © 2016年 泡泡. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface F_CoustomTableViewCell : UITableViewCell

@property (nonatomic,strong) UIImageView *ImageView;
@property(nonatomic,strong) UILabel *titleLable;
@property(nonatomic,strong)UILabel *detailLable;
@property(nonatomic,strong)UILabel *dateLable;

-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;

@end
