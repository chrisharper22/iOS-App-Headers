//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUploadOffProcessStorage;

@interface IGUploadOffProcessNetworkRequestUserScopedObjects : NSObject
{
    FBUploadOffProcessStorage *_requestStorage;
    FBUploadOffProcessStorage *_resultStorage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBUploadOffProcessStorage *resultStorage; // @synthesize resultStorage=_resultStorage;
@property(readonly, nonatomic) FBUploadOffProcessStorage *requestStorage; // @synthesize requestStorage=_requestStorage;
- (id)initWithRequestStorage:(id)arg1 resultStorage:(id)arg2;

@end

