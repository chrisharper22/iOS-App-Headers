//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString;

@interface FBIGLUFilterContext : NSObject <NSCoding>
{
    NSString *_filterIdentifier;
    double _filterStrength;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) shared_ptr_f184d616 igluFilter;
- (id)initWithFilterIdentifier:(id)arg1 filterStrength:(double)arg2;

@end

