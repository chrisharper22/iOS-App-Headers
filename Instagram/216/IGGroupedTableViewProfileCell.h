//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewCell.h>

@class IGTextField, UIView;

@interface IGGroupedTableViewProfileCell : IGGroupedTableViewCell
{
    UIView *_lineView;
    IGTextField *_usernameField;
    IGTextField *_passwordField;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) IGTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) IGTextField *usernameField; // @synthesize usernameField=_usernameField;
- (void)setListRedesignOn:(_Bool)arg1;
- (void)_configureTextLabels;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) double rightImagePadding;
@property(readonly, nonatomic) double leftImagePadding;
- (void)_layoutLineViewWithContentWidth:(double)arg1 horizontalContentInset:(double)arg2;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end

