//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface IGDirectActiveTrayLoggerDataModel : NSObject
{
    _Bool _wasGreenDotVisible;
    NSArray *_recipientIds;
    NSString *_threadId;
    NSNumber *_position;
    NSString *_requestId;
    NSString *_igdSessionId;
    NSNumber *_conversionSurface;
    NSNumber *_conversionType;
    NSString *_impressionSessionId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool wasGreenDotVisible; // @synthesize wasGreenDotVisible=_wasGreenDotVisible;
@property(retain, nonatomic) NSString *impressionSessionId; // @synthesize impressionSessionId=_impressionSessionId;
@property(retain, nonatomic) NSNumber *conversionType; // @synthesize conversionType=_conversionType;
@property(retain, nonatomic) NSNumber *conversionSurface; // @synthesize conversionSurface=_conversionSurface;
@property(retain, nonatomic) NSString *igdSessionId; // @synthesize igdSessionId=_igdSessionId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSArray *recipientIds; // @synthesize recipientIds=_recipientIds;
- (id)init;

@end
