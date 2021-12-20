//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGDiscoveryMapCompactPresentationHandler-Protocol.h"

@class IGDirectAvatarView, IGStackLayout, NSString, UILabel;

@interface IGDiscoveryMapNavigationBar : UIView <IGDiscoveryMapCompactPresentationHandler>
{
    NSString *_analyticsModule;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    IGStackLayout *_stackLayout;
    double _titleLabelHeight;
    double _infoLabelHeight;
    double _compactPresentationProgress;
    IGDirectAvatarView *_avatarView;
    double _avatarRevealProgress;
    double _subtitleRevealProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double subtitleRevealProgress; // @synthesize subtitleRevealProgress=_subtitleRevealProgress;
@property(nonatomic) double avatarRevealProgress; // @synthesize avatarRevealProgress=_avatarRevealProgress;
@property(readonly, nonatomic) IGDirectAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) double compactPresentationProgress; // @synthesize compactPresentationProgress=_compactPresentationProgress;
@property(readonly, nonatomic) double infoLabelHeight;
@property(readonly, nonatomic) double titleLabelHeight;
@property(retain, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)configureSubtitle:(id)arg1 withAvatarImageURL:(id)arg2 animated:(_Bool)arg3;
- (void)configureSubtitle:(id)arg1 withAvatarImageURL:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 avatarImageURL:(id)arg2 avatarViewSpec:(id)arg3 title:(id)arg4 buttons:(id)arg5 analyticsModule:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 buttons:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

