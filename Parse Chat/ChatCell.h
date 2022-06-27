//
//  ChatCell.h
//  Parse Chat
//
//  Created by Kaylyn Phan on 6/27/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChatCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UILabel *userLabel;

@end

NS_ASSUME_NONNULL_END
