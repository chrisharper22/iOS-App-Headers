//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class NSArray, NSString;

@interface IGInfoDetailHoursViewModel : NSObject <IGListDiffable>
{
    NSString *_status;
    NSArray *_hours;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *hours; // @synthesize hours=_hours;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStatus:(id)arg1 hours:(id)arg2;

@end

