//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGStoryTextEntryInputAccessoryView, IGUser, NSArray, NSString, UIColor, UIGestureRecognizer;

@protocol IGStoryTextEntryInputAccessoryViewDelegate <NSObject>
- (void)textEntryInputAccessoryView:(IGStoryTextEntryInputAccessoryView *)arg1 didLongPressOnColor:(UIColor *)arg2 withGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)textEntryInputAccessoryView:(IGStoryTextEntryInputAccessoryView *)arg1 didSelectColor:(UIColor *)arg2;
- (void)textEntryInputAccessoryView:(IGStoryTextEntryInputAccessoryView *)arg1 didSelectUser:(IGUser *)arg2;
- (void)textEntryInputAccessoryView:(IGStoryTextEntryInputAccessoryView *)arg1 didUpdateSuggestedHashtags:(NSArray *)arg2;
- (void)textEntryInputAccessoryView:(IGStoryTextEntryInputAccessoryView *)arg1 didSelectHashtag:(NSString *)arg2;
@end

