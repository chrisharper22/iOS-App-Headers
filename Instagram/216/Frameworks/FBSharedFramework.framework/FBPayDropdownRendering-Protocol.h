//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBPayFormCellBase, FBPayFormFieldOverlayViewController, UIScrollView;

@protocol FBPayDropdownRendering <NSObject>
- (void)hideDropdownComponent;
- (void)translateDropdownComponent:(UIScrollView *)arg1;
- (void)renderDropdownForCell:(FBPayFormCellBase *)arg1 viewController:(FBPayFormFieldOverlayViewController *)arg2 withHeight:(double)arg3;
@end

