//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl;

@interface IGLiveArchiveActionsView : UIView
{
    UIControl *_shareButton;
    UIControl *_downloadButton;
    UIControl *_deleteButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIControl *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIControl *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(readonly, nonatomic) UIControl *shareButton; // @synthesize shareButton=_shareButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

