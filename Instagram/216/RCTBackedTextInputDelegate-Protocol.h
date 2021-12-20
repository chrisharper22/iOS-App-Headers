//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIScrollView;

@protocol RCTBackedTextInputDelegate <NSObject>
- (void)textInputDidChangeSelection;
- (void)textInputDidChange;
- (NSString *)textInputShouldChangeText:(NSString *)arg1 inRange:(struct _NSRange)arg2;
- (void)textInputDidReturn;
- (_Bool)textInputShouldReturn;
- (void)textInputDidEndEditing;
- (_Bool)textInputShouldEndEditing;
- (void)textInputDidBeginEditing;
- (_Bool)textInputShouldBeginEditing;

@optional
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
@end

