//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject, QuickPromotion, QuickPromotionFilterClause;

@interface QPFilterClauseEvaluator : NSObject
{
    id <QuickPromotionFilterClause> _clauseModel;
    id <QuickPromotion> _promotion;
    id <NSObject> _session;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) id <NSObject> session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) id <QuickPromotionFilterClause> clauseModel; // @synthesize clauseModel=_clauseModel;
- (id)_passesClauseWithContext:(id)arg1;
- (id)passesClauseWithContext:(id)arg1;
- (id)initWithClauseModel:(id)arg1 session:(id)arg2 promotion:(id)arg3;

@end

