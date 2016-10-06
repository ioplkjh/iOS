//
//  DetailOrderTopCell.h
//  Carwash
//
//  Created by Andrei Sabinin on 9/29/15.
//  Copyright © 2015 Empty. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailOrderTopCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;

@end
