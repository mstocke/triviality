//
//  Quiz.m
//  Triviality
//
//  Created by tstone10 on 5/22/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import "Quiz.h"

@interface Quiz()
    @property (nonatomic, strong) NSString * quote;
    @property (nonatomic, strong) NSString * ans1;
    @property (nonatomic, strong) NSString * ans2;
    @property (nonatomic, strong) NSString * ans3;
@end

@implementation Quiz

- (void) nextQuestion: (NSUInteger) idx {
    self.quote = [NSString stringWithFormat:@"'%@'",self.movieArray[idx][@"quote"]];
    
    self.ans1 = self.movieArray[idx][@"ans1"];
    self.ans2 = self.movieArray[idx][@"ans2"];
    self.ans3 = self.movieArray[idx][@"ans3"];
    
    if (idx == 0) {
        self.correctCount = 0;
        self.incorrectCount = 0;
    }
}

- (id)initWithQuiz:(NSString*)plistName {
    if ((self = [super init])) {
        NSString *plistCatPath = [[NSBundle mainBundle] pathForResource:plistName ofType:@"plist"];
        self.movieArray = [NSMutableArray arrayWithContentsOfFile:plistCatPath];
        self.quizCount = [self.movieArray count];
    }
    return self;
}

- (BOOL) checkQuestion: (NSUInteger) question forAnswer: (NSUInteger) answer {
    NSString * ans = self.movieArray[question] [@"answer"];
    if  ([ans intValue] == answer) {
        self.correctCount++;
        return YES;
    } else  {
        self.incorrectCount++;
        return NO;
    }
}

@end
