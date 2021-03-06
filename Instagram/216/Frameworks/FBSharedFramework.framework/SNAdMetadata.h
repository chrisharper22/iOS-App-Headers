//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SNAdMetadata : FBValueObject <NSCopying, NSCoding>
{
    NSString *_adId;
    NSString *_templateName;
    NSString *_trackingId;
    NSString *_clientName;
    NSArray *_extensions;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (id)initWithAdId:(id)arg1 templateName:(id)arg2 trackingId:(id)arg3 clientName:(id)arg4 extensions:(id)arg5;

@end

