//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProCategorySelectionResultModel, IGViewController;
@protocol IGProCategorySelectionViewControllerProtocol;

@protocol IGProCategorySelectionViewControllerDelegate <NSObject>
- (void)categorySelectionViewControllerDidDimiss:(IGViewController<IGProCategorySelectionViewControllerProtocol> *)arg1;
- (void)categorySelectionViewController:(IGViewController<IGProCategorySelectionViewControllerProtocol> *)arg1 didCompleteWithResultModel:(IGProCategorySelectionResultModel *)arg2;
@end
