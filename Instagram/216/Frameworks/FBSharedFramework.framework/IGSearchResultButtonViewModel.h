//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGSearchResultButtonViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_textStyle_title;
    long long _textStyle_style;
    _Bool _textStyle_isTappable;
    NSString *_textWithDestructiveButtonStyle_title;
    long long _textWithDestructiveButtonStyle_style;
    _Bool _textWithDestructiveButtonStyle_isTappable;
    _Bool _unreadIndicatorWithChevron_isUnread;
}

+ (id)unreadIndicatorWithChevronWithIsUnread:(_Bool)arg1;
+ (id)textWithDestructiveButtonStyleWithTitle:(id)arg1 style:(long long)arg2 isTappable:(_Bool)arg3;
+ (id)textStyleWithTitle:(id)arg1 style:(long long)arg2 isTappable:(_Bool)arg3;
+ (id)noButton;
+ (id)hideStyle;
- (void).cxx_destruct;
- (void)matchNoButton:(CDUnknownBlockType)arg1 hideStyle:(CDUnknownBlockType)arg2 textStyle:(CDUnknownBlockType)arg3 textWithDestructiveButtonStyle:(CDUnknownBlockType)arg4 unreadIndicatorWithChevron:(CDUnknownBlockType)arg5;
- (_Bool)matchBooleanNoButton:(CDUnknownBlockType)arg1 hideStyle:(CDUnknownBlockType)arg2 textStyle:(CDUnknownBlockType)arg3 textWithDestructiveButtonStyle:(CDUnknownBlockType)arg4 unreadIndicatorWithChevron:(CDUnknownBlockType)arg5;

@end
