//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession;
@protocol IGBusinessAttributeSyncNetworkerDelegate;

@interface IGBusinessAttributeSyncNetworker : NSObject
{
    IGUserSession *_userSession;
    id <IGBusinessAttributeSyncNetworkerDelegate> _networkerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBusinessAttributeSyncNetworkerDelegate> networkerDelegate; // @synthesize networkerDelegate=_networkerDelegate;
- (void)_handleSuccessfulNetworkResponseWithDataModel:(id)arg1;
- (void)disableAttributeSync;
- (void)requestDataForBusinessAttributes;
- (id)initWithUserSession:(id)arg1;

@end

