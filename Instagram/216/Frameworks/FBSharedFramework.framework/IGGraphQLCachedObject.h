//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSDate;
@protocol NSCoding;

@interface IGGraphQLCachedObject : NSObject <NSCoding>
{
    NSDate *_date;
    NSObject<NSCoding> *_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<NSCoding> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

@end

