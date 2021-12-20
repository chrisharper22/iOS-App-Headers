//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>
#import <FBSharedFramework/UIScrollViewDelegate-Protocol.h>

@class FOAStoryTextEntryTextView, NSString;

@protocol FOAStoryTextEntryTextViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)textEntryTextViewDidChangeSelection:(FOAStoryTextEntryTextView *)arg1;
- (void)textEntryTextViewDidChange:(FOAStoryTextEntryTextView *)arg1;
- (_Bool)textEntryTextView:(FOAStoryTextEntryTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textEntryTextViewDidEndEditing:(FOAStoryTextEntryTextView *)arg1;
- (void)textEntryTextViewDidBeginEditing:(FOAStoryTextEntryTextView *)arg1;
- (_Bool)textEntryTextViewShouldEndEditing:(FOAStoryTextEntryTextView *)arg1;
- (_Bool)textEntryTextViewShouldBeginEditing:(FOAStoryTextEntryTextView *)arg1;
@end

