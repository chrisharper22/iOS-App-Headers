//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSAttributedString;

@interface IGDirectPendingInboxNuxViewModel : NSObject <IGListDiffable>
{
    NSAttributedString *_nuxString;
    double _cellHeight;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, nonatomic) NSAttributedString *nuxString; // @synthesize nuxString=_nuxString;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithMessageSettingsOptionEnabled:(_Bool)arg1 userSession:(id)arg2;

@end

