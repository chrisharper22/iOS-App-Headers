//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCTAPresenterDelegate-Protocol.h"
#import "IGCTAPresenterType-Protocol.h"

@class IGCTAPresentationConfigurationBuilder, NSString;
@protocol IGCTAPresenterDelegate, IGCTAPresenterType;

@interface IGLeadGenCTAPresenter : NSObject <IGCTAPresenterDelegate, IGCTAPresenterType>
{
    IGCTAPresentationConfigurationBuilder *_builder;
    long long _bottomCTAType;
    id <IGCTAPresenterDelegate> _delegate;
    id <IGCTAPresenterType> _wrappedPresenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGCTAPresenterType> wrappedPresenter; // @synthesize wrappedPresenter=_wrappedPresenter;
@property(nonatomic) __weak id <IGCTAPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentInParentView:(id)arg1 coordinatedWithScrollView:(id)arg2 inVisibleRect:(struct CGRect)arg3 position:(unsigned long long)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)context;
- (id)view;
- (unsigned long long)preferredPresentationPosition;
- (void)didTapCTAViewForPresenter:(id)arg1;
- (void)_onLeadGenFormSubmitted:(id)arg1;
- (_Bool)_hasLeadGenFormBeenSubmitted;
- (void)_updatePresentationViewConfiguration;
- (id)_builder;
- (id)initWithContext:(id)arg1 analyticsModule:(id)arg2 delegate:(id)arg3 midRollCTAType:(id)arg4 presentationSurface:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

