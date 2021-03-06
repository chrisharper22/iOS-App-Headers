//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGDiscoveryMapEffectsNetegoCellDelegate-Protocol.h"

@class NSString;
@protocol IGDiscoveryMapEffectsNetegoCellSectionControllerDelegate;

@interface IGDiscoveryMapEffectsNetegoCellSectionController : IGListGenericSectionController <IGDiscoveryMapEffectsNetegoCellDelegate>
{
    NSString *_analyticsModule;
    id <IGDiscoveryMapEffectsNetegoCellSectionControllerDelegate> _delegate;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryMapEffectsNetegoCellSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)netegoCellDidDismiss:(id)arg1;
- (void)netegoCellDidPressPrimaryButton:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithAnalyticsModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

