//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMonetizationProductSettingsViewModel-Protocol.h"

@class IGUserSession, NSString;

@interface IGMonetizationProductSettingsFanClubViewModel : NSObject <IGMonetizationProductSettingsViewModel>
{
    _Bool _hasRemovedSubscribers;
    _Bool _shouldShowLearnMore;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)listObjects;
- (unsigned long long)browserURLSource;
- (id)universalToggleLearnMoreURLString;
- (id)supportLearnMoreURLString;
- (id)analyticsModule;
- (id)title;
- (long long)payoutProductType;
- (long long)productType;
- (id)initWithHasRemovedSubscribers:(_Bool)arg1 shouldShowLearnMore:(_Bool)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

