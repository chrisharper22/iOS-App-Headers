//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBCameraAnalyticsPayload : NSObject
{
    unsigned int _cameraSessionInstanceKey;
    NSString *_productName;
    NSString *_productSessionID;
    NSString *_cameraSessionID;
    NSDictionary *_annotations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(readonly, nonatomic) unsigned int cameraSessionInstanceKey; // @synthesize cameraSessionInstanceKey=_cameraSessionInstanceKey;
@property(readonly, copy, nonatomic) NSString *cameraSessionID; // @synthesize cameraSessionID=_cameraSessionID;
@property(readonly, copy, nonatomic) NSString *productSessionID; // @synthesize productSessionID=_productSessionID;
@property(readonly, copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (id)initWithProductName:(id)arg1 productSessionID:(id)arg2 cameraSessionID:(id)arg3;

@end
