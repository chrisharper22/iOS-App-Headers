//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGStoryUserSelectionTextView, NSString;

@protocol IGStoryUserSelectionTextViewDelegate <NSObject>
- (void)storyUserSelectionTextViewDidEndEditing:(IGStoryUserSelectionTextView *)arg1;
- (void)storyUserSelectionTextViewDidAttemptBeginEditing:(IGStoryUserSelectionTextView *)arg1;
- (_Bool)storyUserSelectionTextViewShouldBeginEditing:(IGStoryUserSelectionTextView *)arg1;
- (void)storyUserSelectionTextView:(IGStoryUserSelectionTextView *)arg1 didUpdateText:(NSString *)arg2;
@end

