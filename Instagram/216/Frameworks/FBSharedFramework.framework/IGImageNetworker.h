//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/MOSNetworkDownloading-Protocol.h>

@protocol IGImageNetworking;

@interface IGImageNetworker : NSObject <MOSNetworkDownloading>
{
    id <IGImageNetworking> _networker;
}

- (void).cxx_destruct;
- (id)addRequest:(CDStruct_dac57052)arg1 responseHandler:(id)arg2;
- (id)initWithNetworker:(id)arg1;

@end
