//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGUsernameLabel, NSString, UIFont;

@interface IGUsernameTitleView : UIView
{
    IGUsernameLabel *_usernameLabel;
    NSString *_username;
    _Bool _isVerified;
    _Bool _isCloseFriend;
    UIFont *_font;
    long long _maxCharacterLengthToDisplay;
}

- (void).cxx_destruct;
- (struct CGSize)_constrainedLabelSizeThatFits:(struct CGSize)arg1;
- (id)_usernameToDisplay;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithUsername:(id)arg1 isVerified:(_Bool)arg2 isCloseFriend:(_Bool)arg3;
- (id)initWithFont:(id)arg1 maxCharacterLengthToDisplay:(long long)arg2;
- (id)initWithFont:(id)arg1;

@end

