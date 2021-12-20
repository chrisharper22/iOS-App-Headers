//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGURLRequestFactory-Protocol.h>

@class NSString;

@interface IGURLRequestFactoryImpl : NSObject <IGURLRequestFactory>
{
}

- (id)newStreamingUploadPostRequestWithURL:(id)arg1 streamId:(id)arg2 entityType:(id)arg3 entityName:(id)arg4 mediaHash:(id)arg5 extraParams:(id)arg6 extraStringHeaders:(id)arg7;
- (id)newGetRequestWithURL:(id)arg1 extraStringHeaders:(id)arg2;
- (id)newPostRequestWithURL:(id)arg1 body:(id)arg2 offset:(unsigned long long)arg3 dataCenter:(id)arg4 entityType:(id)arg5 entityName:(id)arg6 mediaHash:(id)arg7 extraParams:(id)arg8 extraStringHeaders:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

