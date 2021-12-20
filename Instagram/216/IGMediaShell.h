//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface IGMediaShell : NSObject <IGListDiffable, NSCopying>
{
    NSString *_diffIdentifier;
    _Bool _shouldRenderDate;
    unsigned long long _index;
    NSDate *_date;
    unsigned long long _mediaCount;
    NSString *_reelPK;
}

+ (id)mediaShellWithDate:(id)arg1 index:(unsigned long long)arg2 mediaCount:(unsigned long long)arg3 reelPK:(id)arg4 shouldRenderDate:(_Bool)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldRenderDate; // @synthesize shouldRenderDate=_shouldRenderDate;
@property(readonly, copy, nonatomic) NSString *reelPK; // @synthesize reelPK=_reelPK;
@property(readonly, nonatomic) unsigned long long mediaCount; // @synthesize mediaCount=_mediaCount;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithDate:(id)arg1 index:(unsigned long long)arg2 mediaCount:(unsigned long long)arg3 reelPK:(id)arg4 shouldRenderDate:(_Bool)arg5;

@end
