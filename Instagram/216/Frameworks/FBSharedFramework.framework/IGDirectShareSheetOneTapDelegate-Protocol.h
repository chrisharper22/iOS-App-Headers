//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGDirectShareSheetOneTapButton, IGStoryXpostingSettingOneTimeOverrideUponSharing;

@protocol IGDirectShareSheetOneTapDelegate <NSObject>
- (void)shareSheetOneTapButtonDidTapUndo:(IGDirectShareSheetOneTapButton *)arg1;
- (void)shareSheetOneTapButtonDidTapSend:(IGDirectShareSheetOneTapButton *)arg1 withXpostingSettingOneTimeOverrideUponSharing:(IGStoryXpostingSettingOneTimeOverrideUponSharing *)arg2;
- (void)shareSheetOneTapButtonShouldPerformAction:(IGDirectShareSheetOneTapButton *)arg1 isSelectableBlock:(void (^)(_Bool, IGStoryXpostingSettingOneTimeOverrideUponSharing *))arg2;
@end

