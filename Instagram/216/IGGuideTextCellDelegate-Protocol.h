//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGGuideTextCell, NSString, NSURL;

@protocol IGGuideTextCellDelegate <NSObject>
- (_Bool)guideTextCell:(IGGuideTextCell *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)guideTextCell:(IGGuideTextCell *)arg1 didTapLink:(NSURL *)arg2;
- (void)guideTextCellDidEndEditing:(IGGuideTextCell *)arg1;
- (void)guideTextCell:(IGGuideTextCell *)arg1 textDidChange:(NSString *)arg2;
@end
