//
//  XFAssetsCollectionViewCell.h
//  XFPhotoBrowser
//
//  Created by zeroLu on 16/7/5.
//  Copyright © 2016年 zeroLu. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XFAssetsModel;

typedef void(^DidSelectImageBlock)();

@interface XFAssetsCollectionViewCell : UICollectionViewCell

@property (strong, nonatomic) XFAssetsModel *model;

@property (nonatomic, copy) DidSelectImageBlock didSelectImageBlock;

- (void)refreshState;
@end
