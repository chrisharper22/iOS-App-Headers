//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGImageView, UILabel, UITapGestureRecognizer;
@protocol IGPromoteEducationDrawerRowViewDelegate;

@interface IGPromoteEducationDrawerRowView : UIView
{
    IGImageView *_logoImageView;
    UILabel *_messageLabel;
    UIView *_separatorView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <IGPromoteEducationDrawerRowViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteEducationDrawerRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapOnView;
- (void)dockToBottomOfHostView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithMessage:(id)arg1 shouldDisplayCallCenterIcon:(_Bool)arg2 module:(id)arg3;

@end

