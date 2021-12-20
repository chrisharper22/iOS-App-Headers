//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGResultsFilterViewControllerLoggingProviderType-Protocol.h"

@class IGUserSession, NSDictionary, NSString;

@interface IGShoppingSellerManagementCreatorMediaFilterViewControllerLoggingProvider : NSObject <IGResultsFilterViewControllerLoggingProviderType>
{
    IGUserSession *_userSession;
    NSDictionary *_extras;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (void)logApplyFilterButtonTappedWithResultsFilterMetadata:(id)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 extras:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

